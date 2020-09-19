extern "C" {
    using namespace dxvk;

    NvAPI_Status __cdecl NvAPI_D3D11_SetDepthBoundsTest(IUnknown* pDeviceOrContext, NvU32 bEnable, float fMinDepth, float fMaxDepth) {
        constexpr auto n = "NvAPI_D3D11_SetDepthBoundsTest";
        static bool alreadyLogged = false;

        if (pDeviceOrContext == nullptr)
            return InvalidArgument(n);

        auto success = NvapiD3d11Device::SetDepthBoundsTest(pDeviceOrContext, bEnable, fMinDepth, fMaxDepth);
        if (!success)
            return Error(n, &alreadyLogged);

        return Ok(n, &alreadyLogged);
    }

    NvAPI_Status __cdecl NvAPI_D3D11_BeginUAVOverlap(IUnknown *pDeviceOrContext) {
        constexpr auto n = "NvAPI_D3D11_BeginUAVOverlap";
        static bool alreadyLogged = false;

        if (pDeviceOrContext == nullptr)
            return InvalidArgument(n);

        auto success = NvapiD3d11Device::BeginUAVOverlap(pDeviceOrContext);
        if (!success)
            return Error(n, &alreadyLogged);

        return Ok(n, &alreadyLogged);
    }

    NvAPI_Status __cdecl NvAPI_D3D11_EndUAVOverlap(IUnknown *pDeviceOrContext) {
        constexpr auto n = "NvAPI_D3D11_EndUAVOverlap";
        static bool alreadyLogged = false;

        if (pDeviceOrContext == nullptr)
            return InvalidArgument(n);

        auto success = NvapiD3d11Device::EndUAVOverlap(pDeviceOrContext);
        if (!success)
            return Error(n, &alreadyLogged);

        return Ok(n, &alreadyLogged);
    }

    NvAPI_Status __cdecl NvAPI_D3D11_MultiDrawInstancedIndirect(ID3D11DeviceContext *pDevContext11, NvU32 drawCount, ID3D11Buffer *pBuffer, NvU32 alignedByteOffsetForArgs, NvU32 alignedByteStrideForArgs) {
        constexpr auto n = "NvAPI_D3D11_MultiDrawInstancedIndirect";
        static bool alreadyLogged = false;

        if (pDevContext11 == nullptr || pBuffer == nullptr)
            return InvalidArgument(n);

        auto success = NvapiD3d11Device::MultiDrawInstancedIndirect(pDevContext11, drawCount, pBuffer, alignedByteOffsetForArgs, alignedByteStrideForArgs);
        if (!success)
            return Error(n, &alreadyLogged);

        return Ok(n, &alreadyLogged);
    }

    NvAPI_Status __cdecl NvAPI_D3D11_MultiDrawIndexedInstancedIndirect(ID3D11DeviceContext *pDevContext11, NvU32 drawCount, ID3D11Buffer *pBuffer, NvU32 alignedByteOffsetForArgs, NvU32 alignedByteStrideForArgs) {
        constexpr auto n = "NvAPI_D3D11_MultiDrawIndexedInstancedIndirect";
        static bool alreadyLogged = false;

        if (pDevContext11 == nullptr || pBuffer == nullptr)
            return InvalidArgument(n);

        auto success = NvapiD3d11Device::MultiDrawIndexedInstancedIndirect(pDevContext11, drawCount, pBuffer, alignedByteOffsetForArgs, alignedByteStrideForArgs);
        if (!success)
            return Error(n, &alreadyLogged);

        return Ok(n, &alreadyLogged);
    }

    NvAPI_Status __cdecl NvAPI_D3D11_IsNvShaderExtnOpCodeSupported(IUnknown* pDeviceOrContext, NvU32 code, bool* supported) {
        constexpr auto n = "NvAPI_D3D11_IsNvShaderExtnOpCodeSupported";

        if (pDeviceOrContext == nullptr || supported == nullptr)
                return InvalidArgument(n);

        *supported = false;

        return Ok(str::format(n, " ", code));
    }
}