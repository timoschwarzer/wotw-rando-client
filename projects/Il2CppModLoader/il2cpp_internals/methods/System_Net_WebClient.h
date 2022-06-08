#include <interception_macros.h>

namespace app::methods::System::Net::WebClient {
IL2CPP_REGISTER_METHOD(0x020AD8D0, void, __ctor, (WebClient * __this));
IL2CPP_REGISTER_METHOD(0x020AD9F0, void, InitWebClientAsync, (WebClient * __this));
IL2CPP_REGISTER_METHOD(0x020AE460, void, ClearWebClientState, (WebClient * __this));
IL2CPP_REGISTER_METHODINFO(0x0471A280, WebClient_ClearWebClientState__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020AE580, void, CompleteWebClientState, (WebClient * __this));
IL2CPP_REGISTER_METHOD(0x0061E2F0, bool, get_AllowReadStreamBuffering, (WebClient * __this));
IL2CPP_REGISTER_METHOD(0x0061E2E0, void, set_AllowReadStreamBuffering, (WebClient * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00CA2550, bool, get_AllowWriteStreamBuffering, (WebClient * __this));
IL2CPP_REGISTER_METHOD(0x00CA2560, void, set_AllowWriteStreamBuffering, (WebClient * __this, bool value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, add_WriteStreamClosed, (WebClient * __this, WriteStreamClosedEventHandler * value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, remove_WriteStreamClosed, (WebClient * __this, WriteStreamClosedEventHandler * value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnWriteStreamClosed, (WebClient * __this, WriteStreamClosedEventArgs * e));
IL2CPP_REGISTER_METHOD(0x002FBB60, Encoding *, get_Encoding, (WebClient * __this));
IL2CPP_REGISTER_METHOD(0x020AE590, void, set_Encoding, (WebClient * __this, Encoding * value));
IL2CPP_REGISTER_METHODINFO(0x047979C0, WebClient_set_Encoding__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020AE650, String *, get_BaseAddress, (WebClient * __this));
IL2CPP_REGISTER_METHOD(0x020AE730, void, set_BaseAddress, (WebClient * __this, String * value));
IL2CPP_REGISTER_METHODINFO(0x0470CA18, WebClient_set_BaseAddress__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FB990, ICredentials *, get_Credentials, (WebClient * __this));
IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_Credentials, (WebClient * __this, ICredentials * value));
IL2CPP_REGISTER_METHOD(0x020AE910, bool, get_UseDefaultCredentials, (WebClient * __this));
IL2CPP_REGISTER_METHOD(0x020AE9E0, void, set_UseDefaultCredentials, (WebClient * __this, bool value));
IL2CPP_REGISTER_METHOD(0x020AEA10, WebHeaderCollection *, get_Headers, (WebClient * __this));
IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_Headers, (WebClient * __this, WebHeaderCollection * value));
IL2CPP_REGISTER_METHOD(0x020AEB70, NameValueCollection *, get_QueryString, (WebClient * __this));
IL2CPP_REGISTER_METHOD(0x002FB9E0, void, set_QueryString, (WebClient * __this, NameValueCollection * value));
IL2CPP_REGISTER_METHOD(0x020AECD0, WebHeaderCollection *, get_ResponseHeaders, (WebClient * __this));
IL2CPP_REGISTER_METHOD(0x020AECF0, IWebProxy *, get_Proxy, (WebClient * __this));
IL2CPP_REGISTER_METHOD(0x020AEDA0, void, set_Proxy, (WebClient * __this, IWebProxy * value));
IL2CPP_REGISTER_METHOD(0x002FBC40, RequestCachePolicy *, get_CachePolicy, (WebClient * __this));
IL2CPP_REGISTER_METHOD(0x002FBC50, void, set_CachePolicy, (WebClient * __this, RequestCachePolicy * value));
IL2CPP_REGISTER_METHOD(0x020AEDB0, bool, get_IsBusy, (WebClient * __this));
IL2CPP_REGISTER_METHOD(0x020AEDC0, WebRequest *, GetWebRequest, (WebClient * __this, Uri * address));
IL2CPP_REGISTER_METHOD(0x020AEF60, WebResponse *, GetWebResponse, (WebClient * __this, WebRequest * request));
IL2CPP_REGISTER_METHOD(0x020AEFA0, WebResponse *, GetWebResponse, (WebClient * __this, WebRequest * request, IAsyncResult * result));
IL2CPP_REGISTER_METHOD(0x020AEFE0, Byte__Array *, DownloadData, (WebClient * __this, String * address));
IL2CPP_REGISTER_METHODINFO(0x0476A7A0, WebClient_DownloadData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020AF0B0, Byte__Array *, DownloadData, (WebClient * __this, Uri * address));
IL2CPP_REGISTER_METHODINFO(0x04791A08, WebClient_DownloadData_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020AF260, Byte__Array *, DownloadDataInternal, (WebClient * __this, Uri * address, WebRequest * * request));
IL2CPP_REGISTER_METHODINFO(0x0475CF38, WebClient_DownloadDataInternal__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020AF440, void, DownloadFile, (WebClient * __this, String * address, String * fileName));
IL2CPP_REGISTER_METHODINFO(0x047200C0, WebClient_DownloadFile__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020AF520, void, DownloadFile, (WebClient * __this, Uri * address, String * fileName));
IL2CPP_REGISTER_METHODINFO(0x04773190, WebClient_DownloadFile_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020AF980, Stream *, OpenRead, (WebClient * __this, String * address));
IL2CPP_REGISTER_METHODINFO(0x04774968, WebClient_OpenRead__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020AFA50, Stream *, OpenRead, (WebClient * __this, Uri * address));
IL2CPP_REGISTER_METHODINFO(0x0476C2E8, WebClient_OpenRead_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020AFD50, Stream *, OpenWrite, (WebClient * __this, String * address));
IL2CPP_REGISTER_METHODINFO(0x0473D150, WebClient_OpenWrite__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020AFE30, Stream *, OpenWrite, (WebClient * __this, Uri * address));
IL2CPP_REGISTER_METHOD(0x020AFE40, Stream *, OpenWrite, (WebClient * __this, String * address, String * method_1));
IL2CPP_REGISTER_METHODINFO(0x04782400, WebClient_OpenWrite_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020AFF20, Stream *, OpenWrite, (WebClient * __this, Uri * address, String * method_1));
IL2CPP_REGISTER_METHODINFO(0x0475A1C8, WebClient_OpenWrite_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020B0300, Byte__Array *, UploadData, (WebClient * __this, String * address, Byte__Array * data));
IL2CPP_REGISTER_METHODINFO(0x04749730, WebClient_UploadData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020B03F0, Byte__Array *, UploadData, (WebClient * __this, Uri * address, Byte__Array * data));
IL2CPP_REGISTER_METHOD(0x020B0410, Byte__Array *, UploadData, (WebClient * __this, String * address, String * method_1, Byte__Array * data));
IL2CPP_REGISTER_METHODINFO(0x047587E8, WebClient_UploadData_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020B0510, Byte__Array *, UploadData, (WebClient * __this, Uri * address, String * method_1, Byte__Array * data));
IL2CPP_REGISTER_METHODINFO(0x04755BE8, WebClient_UploadData_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020B0750, Byte__Array *, UploadDataInternal, (WebClient * __this, Uri * address, String * method_1, Byte__Array * data, WebRequest * * request));
IL2CPP_REGISTER_METHODINFO(0x047787E8, WebClient_UploadDataInternal__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020B0970, void, OpenFileInternal, (WebClient * __this, bool needsHeaderAndBoundary, String * fileName, FileStream * * fs, Byte__Array * * buffer, Byte__Array * * formHeaderBytes, Byte__Array * * boundaryBytes));
IL2CPP_REGISTER_METHODINFO(0x047292A8, WebClient_OpenFileInternal__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020B1330, Byte__Array *, UploadFile, (WebClient * __this, String * address, String * fileName));
IL2CPP_REGISTER_METHODINFO(0x0470B320, WebClient_UploadFile__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020B1420, Byte__Array *, UploadFile, (WebClient * __this, Uri * address, String * fileName));
IL2CPP_REGISTER_METHOD(0x020B1440, Byte__Array *, UploadFile, (WebClient * __this, String * address, String * method_1, String * fileName));
IL2CPP_REGISTER_METHOD(0x020B1490, Byte__Array *, UploadFile, (WebClient * __this, Uri * address, String * method_1, String * fileName));
IL2CPP_REGISTER_METHODINFO(0x04754CA0, WebClient_UploadFile_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020B1900, Byte__Array *, UploadValuesInternal, (WebClient * __this, NameValueCollection * data));
IL2CPP_REGISTER_METHODINFO(0x0478A7A8, WebClient_UploadValuesInternal__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020B1E40, Byte__Array *, UploadValues, (WebClient * __this, String * address, NameValueCollection * data));
IL2CPP_REGISTER_METHODINFO(0x04710418, WebClient_UploadValues__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020B1F30, Byte__Array *, UploadValues, (WebClient * __this, Uri * address, NameValueCollection * data));
IL2CPP_REGISTER_METHOD(0x020B1F50, Byte__Array *, UploadValues, (WebClient * __this, String * address, String * method_1, NameValueCollection * data));
IL2CPP_REGISTER_METHODINFO(0x0476CC00, WebClient_UploadValues_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020B2050, Byte__Array *, UploadValues, (WebClient * __this, Uri * address, String * method_1, NameValueCollection * data));
IL2CPP_REGISTER_METHODINFO(0x04701690, WebClient_UploadValues_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020B23E0, String *, UploadString, (WebClient * __this, String * address, String * data));
IL2CPP_REGISTER_METHODINFO(0x04744138, WebClient_UploadString__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020B24D0, String *, UploadString, (WebClient * __this, Uri * address, String * data));
IL2CPP_REGISTER_METHOD(0x020B24F0, String *, UploadString, (WebClient * __this, String * address, String * method_1, String * data));
IL2CPP_REGISTER_METHODINFO(0x04710B38, WebClient_UploadString_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020B25F0, String *, UploadString, (WebClient * __this, Uri * address, String * method_1, String * data));
IL2CPP_REGISTER_METHODINFO(0x0475AB10, WebClient_UploadString_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020B2860, String *, DownloadString, (WebClient * __this, String * address));
IL2CPP_REGISTER_METHODINFO(0x04700F38, WebClient_DownloadString__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020B2930, String *, DownloadString, (WebClient * __this, Uri * address));
IL2CPP_REGISTER_METHODINFO(0x04798638, WebClient_DownloadString_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020B2AF0, void, AbortRequest, (WebRequest * request));
IL2CPP_REGISTER_METHODINFO(0x04751180, WebClient_AbortRequest__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020B2BF0, void, CopyHeadersTo, (WebClient * __this, WebRequest * request));
IL2CPP_REGISTER_METHOD(0x020B33C0, Uri *, GetUri, (WebClient * __this, String * path));
IL2CPP_REGISTER_METHOD(0x020B3760, Uri *, GetUri, (WebClient * __this, Uri * address));
IL2CPP_REGISTER_METHODINFO(0x047019A0, WebClient_GetUri_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020B3E70, void, DownloadBitsResponseCallback, (IAsyncResult * result));
IL2CPP_REGISTER_METHODINFO(0x04752058, WebClient_DownloadBitsResponseCallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020B4250, void, DownloadBitsReadCallback, (IAsyncResult * result));
IL2CPP_REGISTER_METHODINFO(0x04747770, WebClient_DownloadBitsReadCallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020B4350, void, DownloadBitsReadCallbackState, (WebClient_DownloadBitsState * state, IAsyncResult * result));
IL2CPP_REGISTER_METHODINFO(0x047085B0, WebClient_DownloadBitsReadCallbackState__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020B4730, Byte__Array *, DownloadBits, (WebClient * __this, WebRequest * request, Stream * writeStream, CompletionDelegate * completionDelegate, AsyncOperation * asyncOp));
IL2CPP_REGISTER_METHOD(0x020B4A40, void, UploadBitsRequestCallback, (IAsyncResult * result));
IL2CPP_REGISTER_METHODINFO(0x04770EF0, WebClient_UploadBitsRequestCallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020B4E00, void, UploadBitsWriteCallback, (IAsyncResult * result));
IL2CPP_REGISTER_METHODINFO(0x0472CB48, WebClient_UploadBitsWriteCallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020B5210, void, UploadBits, (WebClient * __this, WebRequest * request, Stream * readStream, Byte__Array * buffer, int32_t chunkSize, Byte__Array * header, Byte__Array * footer, CompletionDelegate * uploadCompletionDelegate, CompletionDelegate * downloadCompletionDelegate, AsyncOperation * asyncOp));
IL2CPP_REGISTER_METHOD(0x020B5650, bool, ByteArrayHasPrefix, (WebClient * __this, Byte__Array * prefix, Byte__Array * byteArray));
IL2CPP_REGISTER_METHOD(0x020B56D0, String *, GetStringUsingEncoding, (WebClient * __this, WebRequest * request, Byte__Array * data));
IL2CPP_REGISTER_METHOD(0x020B5BF0, String *, MapToDefaultMethod, (WebClient * __this, Uri * address));
IL2CPP_REGISTER_METHOD(0x020B5E40, String *, UrlEncode, (String * str));
IL2CPP_REGISTER_METHOD(0x020B5EF0, String *, UrlEncode, (String * str, Encoding * e));
IL2CPP_REGISTER_METHOD(0x020B5FA0, Byte__Array *, UrlEncodeToBytes, (String * str, Encoding * e));
IL2CPP_REGISTER_METHOD(0x020B6000, Byte__Array *, UrlEncodeBytesToBytesInternal, (Byte__Array * bytes, int32_t offset, int32_t count, bool alwaysCreateReturnValue));
IL2CPP_REGISTER_METHOD(0x020B6310, uint16_t, IntToHex, (int32_t n));
IL2CPP_REGISTER_METHOD(0x020B6320, bool, IsSafe, (uint16_t ch));
IL2CPP_REGISTER_METHOD(0x020B63A0, void, InvokeOperationCompleted, (WebClient * __this, AsyncOperation * asyncOp, SendOrPostCallback * callback, AsyncCompletedEventArgs * eventArgs));
IL2CPP_REGISTER_METHOD(0x020B6400, bool, AnotherCallInProgress, (WebClient * __this, int32_t callNesting));
IL2CPP_REGISTER_METHOD(0x020B6410, void, add_OpenReadCompleted, (WebClient * __this, OpenReadCompletedEventHandler * value));
IL2CPP_REGISTER_METHOD(0x020B6500, void, remove_OpenReadCompleted, (WebClient * __this, OpenReadCompletedEventHandler * value));
IL2CPP_REGISTER_METHOD(0x017F0830, void, OnOpenReadCompleted, (WebClient * __this, OpenReadCompletedEventArgs * e));
IL2CPP_REGISTER_METHOD(0x020B65F0, void, OpenReadOperationCompleted, (WebClient * __this, Object * arg));
IL2CPP_REGISTER_METHODINFO(0x0470F558, WebClient_OpenReadOperationCompleted__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020B66E0, void, OpenReadAsyncCallback, (WebClient * __this, IAsyncResult * result));
IL2CPP_REGISTER_METHODINFO(0x0470A3E0, WebClient_OpenReadAsyncCallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020B6C90, void, OpenReadAsync, (WebClient * __this, Uri * address));
IL2CPP_REGISTER_METHOD(0x020B6CA0, void, OpenReadAsync, (WebClient * __this, Uri * address, Object * userToken));
IL2CPP_REGISTER_METHODINFO(0x04730620, WebClient_OpenReadAsync_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020B71D0, void, add_OpenWriteCompleted, (WebClient * __this, OpenWriteCompletedEventHandler * value));
IL2CPP_REGISTER_METHOD(0x020B72C0, void, remove_OpenWriteCompleted, (WebClient * __this, OpenWriteCompletedEventHandler * value));
IL2CPP_REGISTER_METHOD(0x020B73B0, void, OnOpenWriteCompleted, (WebClient * __this, OpenWriteCompletedEventArgs * e));
IL2CPP_REGISTER_METHOD(0x020B73D0, void, OpenWriteOperationCompleted, (WebClient * __this, Object * arg));
IL2CPP_REGISTER_METHODINFO(0x04790360, WebClient_OpenWriteOperationCompleted__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020B74C0, void, OpenWriteAsyncCallback, (WebClient * __this, IAsyncResult * result));
IL2CPP_REGISTER_METHODINFO(0x0473B618, WebClient_OpenWriteAsyncCallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020B79D0, void, OpenWriteAsync, (WebClient * __this, Uri * address));
IL2CPP_REGISTER_METHOD(0x020B79F0, void, OpenWriteAsync, (WebClient * __this, Uri * address, String * method_1));
IL2CPP_REGISTER_METHOD(0x020B7A10, void, OpenWriteAsync, (WebClient * __this, Uri * address, String * method_1, Object * userToken));
IL2CPP_REGISTER_METHODINFO(0x04719278, WebClient_OpenWriteAsync_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020B7F60, void, add_DownloadStringCompleted, (WebClient * __this, DownloadStringCompletedEventHandler * value));
IL2CPP_REGISTER_METHOD(0x020B8050, void, remove_DownloadStringCompleted, (WebClient * __this, DownloadStringCompletedEventHandler * value));
IL2CPP_REGISTER_METHOD(0x020B8140, void, OnDownloadStringCompleted, (WebClient * __this, DownloadStringCompletedEventArgs * e));
IL2CPP_REGISTER_METHOD(0x020B8160, void, DownloadStringOperationCompleted, (WebClient * __this, Object * arg));
IL2CPP_REGISTER_METHODINFO(0x04792EE0, WebClient_DownloadStringOperationCompleted__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020B8250, void, DownloadStringAsyncCallback, (WebClient * __this, Byte__Array * returnBytes, Exception * exception, Object * state));
IL2CPP_REGISTER_METHODINFO(0x04777E88, WebClient_DownloadStringAsyncCallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020B8500, void, DownloadStringAsync, (WebClient * __this, Uri * address));
IL2CPP_REGISTER_METHOD(0x020B8510, void, DownloadStringAsync, (WebClient * __this, Uri * address, Object * userToken));
IL2CPP_REGISTER_METHODINFO(0x0477D320, WebClient_DownloadStringAsync_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020B8930, void, add_DownloadDataCompleted, (WebClient * __this, DownloadDataCompletedEventHandler * value));
IL2CPP_REGISTER_METHOD(0x020B8A20, void, remove_DownloadDataCompleted, (WebClient * __this, DownloadDataCompletedEventHandler * value));
IL2CPP_REGISTER_METHOD(0x020B8B10, void, OnDownloadDataCompleted, (WebClient * __this, DownloadDataCompletedEventArgs * e));
IL2CPP_REGISTER_METHOD(0x020B8B30, void, DownloadDataOperationCompleted, (WebClient * __this, Object * arg));
IL2CPP_REGISTER_METHODINFO(0x0475F5C0, WebClient_DownloadDataOperationCompleted__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020B8C20, void, DownloadDataAsyncCallback, (WebClient * __this, Byte__Array * returnBytes, Exception * exception, Object * state));
IL2CPP_REGISTER_METHODINFO(0x047780C0, WebClient_DownloadDataAsyncCallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020B8E20, void, DownloadDataAsync, (WebClient * __this, Uri * address));
IL2CPP_REGISTER_METHOD(0x020B8E30, void, DownloadDataAsync, (WebClient * __this, Uri * address, Object * userToken));
IL2CPP_REGISTER_METHODINFO(0x0473F770, WebClient_DownloadDataAsync_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020B9250, void, add_DownloadFileCompleted, (WebClient * __this, AsyncCompletedEventHandler * value));
IL2CPP_REGISTER_METHOD(0x020B9340, void, remove_DownloadFileCompleted, (WebClient * __this, AsyncCompletedEventHandler * value));
IL2CPP_REGISTER_METHOD(0x020B9430, void, OnDownloadFileCompleted, (WebClient * __this, AsyncCompletedEventArgs * e));
IL2CPP_REGISTER_METHOD(0x020B9450, void, DownloadFileOperationCompleted, (WebClient * __this, Object * arg));
IL2CPP_REGISTER_METHODINFO(0x04792BE0, WebClient_DownloadFileOperationCompleted__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020B9540, void, DownloadFileAsyncCallback, (WebClient * __this, Byte__Array * returnBytes, Exception * exception, Object * state));
IL2CPP_REGISTER_METHODINFO(0x0474DC10, WebClient_DownloadFileAsyncCallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020B9730, void, DownloadFileAsync, (WebClient * __this, Uri * address, String * fileName));
IL2CPP_REGISTER_METHOD(0x020B9750, void, DownloadFileAsync, (WebClient * __this, Uri * address, String * fileName, Object * userToken));
IL2CPP_REGISTER_METHODINFO(0x04701E20, WebClient_DownloadFileAsync_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020B9CD0, void, add_UploadStringCompleted, (WebClient * __this, UploadStringCompletedEventHandler * value));
IL2CPP_REGISTER_METHOD(0x020B9DC0, void, remove_UploadStringCompleted, (WebClient * __this, UploadStringCompletedEventHandler * value));
IL2CPP_REGISTER_METHOD(0x020B9EB0, void, OnUploadStringCompleted, (WebClient * __this, UploadStringCompletedEventArgs * e));
IL2CPP_REGISTER_METHOD(0x020B9ED0, void, UploadStringOperationCompleted, (WebClient * __this, Object * arg));
IL2CPP_REGISTER_METHODINFO(0x0470C1B0, WebClient_UploadStringOperationCompleted__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020B9FC0, void, StartDownloadAsync, (WebClient * __this, WebClient_UploadBitsState * state));
IL2CPP_REGISTER_METHODINFO(0x04798B78, WebClient_StartDownloadAsync__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020BA250, void, UploadStringAsyncWriteCallback, (WebClient * __this, Byte__Array * returnBytes, Exception * exception, Object * state));
IL2CPP_REGISTER_METHODINFO(0x04775860, WebClient_UploadStringAsyncWriteCallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020BA4B0, void, UploadStringAsyncReadCallback, (WebClient * __this, Byte__Array * returnBytes, Exception * exception, Object * state));
IL2CPP_REGISTER_METHODINFO(0x0478A1F8, WebClient_UploadStringAsyncReadCallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020BA760, void, UploadStringAsync, (WebClient * __this, Uri * address, String * data));
IL2CPP_REGISTER_METHOD(0x020BA780, void, UploadStringAsync, (WebClient * __this, Uri * address, String * method_1, String * data));
IL2CPP_REGISTER_METHOD(0x020BA7A0, void, UploadStringAsync, (WebClient * __this, Uri * address, String * method_1, String * data, Object * userToken));
IL2CPP_REGISTER_METHODINFO(0x0472B9C0, WebClient_UploadStringAsync_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020BAE50, void, add_UploadDataCompleted, (WebClient * __this, UploadDataCompletedEventHandler * value));
IL2CPP_REGISTER_METHOD(0x020BAF40, void, remove_UploadDataCompleted, (WebClient * __this, UploadDataCompletedEventHandler * value));
IL2CPP_REGISTER_METHOD(0x020BB030, void, OnUploadDataCompleted, (WebClient * __this, UploadDataCompletedEventArgs * e));
IL2CPP_REGISTER_METHOD(0x020BB050, void, UploadDataOperationCompleted, (WebClient * __this, Object * arg));
IL2CPP_REGISTER_METHODINFO(0x047394D8, WebClient_UploadDataOperationCompleted__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020BB140, void, UploadDataAsyncWriteCallback, (WebClient * __this, Byte__Array * returnBytes, Exception * exception, Object * state));
IL2CPP_REGISTER_METHODINFO(0x0473C008, WebClient_UploadDataAsyncWriteCallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020BB3B0, void, UploadDataAsyncReadCallback, (WebClient * __this, Byte__Array * returnBytes, Exception * exception, Object * state));
IL2CPP_REGISTER_METHODINFO(0x0473F188, WebClient_UploadDataAsyncReadCallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020BB5B0, void, UploadDataAsync, (WebClient * __this, Uri * address, Byte__Array * data));
IL2CPP_REGISTER_METHOD(0x020BB5D0, void, UploadDataAsync, (WebClient * __this, Uri * address, String * method_1, Byte__Array * data));
IL2CPP_REGISTER_METHOD(0x020BB5F0, void, UploadDataAsync, (WebClient * __this, Uri * address, String * method_1, Byte__Array * data, Object * userToken));
IL2CPP_REGISTER_METHODINFO(0x04740B98, WebClient_UploadDataAsync_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020BBCA0, void, add_UploadFileCompleted, (WebClient * __this, UploadFileCompletedEventHandler * value));
IL2CPP_REGISTER_METHOD(0x020BBD90, void, remove_UploadFileCompleted, (WebClient * __this, UploadFileCompletedEventHandler * value));
IL2CPP_REGISTER_METHOD(0x020BBE80, void, OnUploadFileCompleted, (WebClient * __this, UploadFileCompletedEventArgs * e));
IL2CPP_REGISTER_METHOD(0x020BBEA0, void, UploadFileOperationCompleted, (WebClient * __this, Object * arg));
IL2CPP_REGISTER_METHODINFO(0x04720470, WebClient_UploadFileOperationCompleted__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020BBF90, void, UploadFileAsyncWriteCallback, (WebClient * __this, Byte__Array * returnBytes, Exception * exception, Object * state));
IL2CPP_REGISTER_METHODINFO(0x04723320, WebClient_UploadFileAsyncWriteCallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020BC200, void, UploadFileAsyncReadCallback, (WebClient * __this, Byte__Array * returnBytes, Exception * exception, Object * state));
IL2CPP_REGISTER_METHODINFO(0x04727E60, WebClient_UploadFileAsyncReadCallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020BC400, void, UploadFileAsync, (WebClient * __this, Uri * address, String * fileName));
IL2CPP_REGISTER_METHOD(0x020BC420, void, UploadFileAsync, (WebClient * __this, Uri * address, String * method_1, String * fileName));
IL2CPP_REGISTER_METHOD(0x020BC440, void, UploadFileAsync, (WebClient * __this, Uri * address, String * method_1, String * fileName, Object * userToken));
IL2CPP_REGISTER_METHODINFO(0x04730020, WebClient_UploadFileAsync_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020BCB90, void, add_UploadValuesCompleted, (WebClient * __this, UploadValuesCompletedEventHandler * value));
IL2CPP_REGISTER_METHOD(0x020BCC80, void, remove_UploadValuesCompleted, (WebClient * __this, UploadValuesCompletedEventHandler * value));
IL2CPP_REGISTER_METHOD(0x020BCD70, void, OnUploadValuesCompleted, (WebClient * __this, UploadValuesCompletedEventArgs * e));
IL2CPP_REGISTER_METHOD(0x020BCD90, void, UploadValuesOperationCompleted, (WebClient * __this, Object * arg));
IL2CPP_REGISTER_METHODINFO(0x04759760, WebClient_UploadValuesOperationCompleted__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020BCE80, void, UploadValuesAsyncWriteCallback, (WebClient * __this, Byte__Array * returnBytes, Exception * exception, Object * state));
IL2CPP_REGISTER_METHODINFO(0x04700B90, WebClient_UploadValuesAsyncWriteCallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020BD0F0, void, UploadValuesAsyncReadCallback, (WebClient * __this, Byte__Array * returnBytes, Exception * exception, Object * state));
IL2CPP_REGISTER_METHODINFO(0x0474D350, WebClient_UploadValuesAsyncReadCallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020BD2F0, void, UploadValuesAsync, (WebClient * __this, Uri * address, NameValueCollection * data));
IL2CPP_REGISTER_METHOD(0x020BD310, void, UploadValuesAsync, (WebClient * __this, Uri * address, String * method_1, NameValueCollection * data));
IL2CPP_REGISTER_METHOD(0x020BD330, void, UploadValuesAsync, (WebClient * __this, Uri * address, String * method_1, NameValueCollection * data, Object * userToken));
IL2CPP_REGISTER_METHODINFO(0x0472C748, WebClient_UploadValuesAsync_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020BDA00, void, CancelAsync, (WebClient * __this));
IL2CPP_REGISTER_METHOD(0x020BDA10, Task_1_System_String_ *, DownloadStringTaskAsync, (WebClient * __this, String * address));
IL2CPP_REGISTER_METHOD(0x020BDA40, Task_1_System_String_ *, DownloadStringTaskAsync, (WebClient * __this, Uri * address));
IL2CPP_REGISTER_METHODINFO(0x0470F980, WebClient_DownloadStringTaskAsync_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020BDE90, Task_1_System_IO_Stream_ *, OpenReadTaskAsync, (WebClient * __this, String * address));
IL2CPP_REGISTER_METHOD(0x020BDEC0, Task_1_System_IO_Stream_ *, OpenReadTaskAsync, (WebClient * __this, Uri * address));
IL2CPP_REGISTER_METHODINFO(0x047934A8, WebClient_OpenReadTaskAsync_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020BE310, Task_1_System_IO_Stream_ *, OpenWriteTaskAsync, (WebClient * __this, String * address));
IL2CPP_REGISTER_METHOD(0x020BE340, Task_1_System_IO_Stream_ *, OpenWriteTaskAsync, (WebClient * __this, Uri * address));
IL2CPP_REGISTER_METHOD(0x020BE350, Task_1_System_IO_Stream_ *, OpenWriteTaskAsync, (WebClient * __this, String * address, String * method_1));
IL2CPP_REGISTER_METHOD(0x020BE390, Task_1_System_IO_Stream_ *, OpenWriteTaskAsync, (WebClient * __this, Uri * address, String * method_1));
IL2CPP_REGISTER_METHODINFO(0x0477F4C8, WebClient_OpenWriteTaskAsync_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020BE7E0, Task_1_System_String_ *, UploadStringTaskAsync, (WebClient * __this, String * address, String * data));
IL2CPP_REGISTER_METHOD(0x020BE820, Task_1_System_String_ *, UploadStringTaskAsync, (WebClient * __this, Uri * address, String * data));
IL2CPP_REGISTER_METHOD(0x020BE840, Task_1_System_String_ *, UploadStringTaskAsync, (WebClient * __this, String * address, String * method_1, String * data));
IL2CPP_REGISTER_METHOD(0x020BE890, Task_1_System_String_ *, UploadStringTaskAsync, (WebClient * __this, Uri * address, String * method_1, String * data));
IL2CPP_REGISTER_METHODINFO(0x047171F8, WebClient_UploadStringTaskAsync_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020BED00, Task_1_System_Byte_ *, DownloadDataTaskAsync, (WebClient * __this, String * address));
IL2CPP_REGISTER_METHOD(0x020BED30, Task_1_System_Byte_ *, DownloadDataTaskAsync, (WebClient * __this, Uri * address));
IL2CPP_REGISTER_METHODINFO(0x0477DD28, WebClient_DownloadDataTaskAsync_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020BF0E0, Task *, DownloadFileTaskAsync, (WebClient * __this, String * address, String * fileName));
IL2CPP_REGISTER_METHOD(0x020BF120, Task *, DownloadFileTaskAsync, (WebClient * __this, Uri * address, String * fileName));
IL2CPP_REGISTER_METHODINFO(0x04714DE8, WebClient_DownloadFileTaskAsync_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020BF570, Task_1_System_Byte_ *, UploadDataTaskAsync, (WebClient * __this, String * address, Byte__Array * data));
IL2CPP_REGISTER_METHOD(0x020BF5B0, Task_1_System_Byte_ *, UploadDataTaskAsync, (WebClient * __this, Uri * address, Byte__Array * data));
IL2CPP_REGISTER_METHOD(0x020BF5D0, Task_1_System_Byte_ *, UploadDataTaskAsync, (WebClient * __this, String * address, String * method_1, Byte__Array * data));
IL2CPP_REGISTER_METHOD(0x020BF620, Task_1_System_Byte_ *, UploadDataTaskAsync, (WebClient * __this, Uri * address, String * method_1, Byte__Array * data));
IL2CPP_REGISTER_METHODINFO(0x04766748, WebClient_UploadDataTaskAsync_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020BF9E0, Task_1_System_Byte_ *, UploadFileTaskAsync, (WebClient * __this, String * address, String * fileName));
IL2CPP_REGISTER_METHOD(0x020BFA20, Task_1_System_Byte_ *, UploadFileTaskAsync, (WebClient * __this, Uri * address, String * fileName));
IL2CPP_REGISTER_METHOD(0x020BFA40, Task_1_System_Byte_ *, UploadFileTaskAsync, (WebClient * __this, String * address, String * method_1, String * fileName));
IL2CPP_REGISTER_METHOD(0x020BFA90, Task_1_System_Byte_ *, UploadFileTaskAsync, (WebClient * __this, Uri * address, String * method_1, String * fileName));
IL2CPP_REGISTER_METHODINFO(0x04737FA8, WebClient_UploadFileTaskAsync_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020BFF00, Task_1_System_Byte_ *, UploadValuesTaskAsync, (WebClient * __this, String * address, NameValueCollection * data));
IL2CPP_REGISTER_METHOD(0x020BFF40, Task_1_System_Byte_ *, UploadValuesTaskAsync, (WebClient * __this, String * address, String * method_1, NameValueCollection * data));
IL2CPP_REGISTER_METHOD(0x020BFF90, Task_1_System_Byte_ *, UploadValuesTaskAsync, (WebClient * __this, Uri * address, NameValueCollection * data));
IL2CPP_REGISTER_METHOD(0x020BFFB0, Task_1_System_Byte_ *, UploadValuesTaskAsync, (WebClient * __this, Uri * address, String * method_1, NameValueCollection * data));
IL2CPP_REGISTER_METHODINFO(0x0471F3C8, WebClient_UploadValuesTaskAsync_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020C0420, void, add_DownloadProgressChanged, (WebClient * __this, DownloadProgressChangedEventHandler * value));
IL2CPP_REGISTER_METHOD(0x020C0510, void, remove_DownloadProgressChanged, (WebClient * __this, DownloadProgressChangedEventHandler * value));
IL2CPP_REGISTER_METHOD(0x020C0600, void, add_UploadProgressChanged, (WebClient * __this, UploadProgressChangedEventHandler * value));
IL2CPP_REGISTER_METHOD(0x020C06F0, void, remove_UploadProgressChanged, (WebClient * __this, UploadProgressChangedEventHandler * value));
IL2CPP_REGISTER_METHOD(0x020C07E0, void, OnDownloadProgressChanged, (WebClient * __this, DownloadProgressChangedEventArgs * e));
IL2CPP_REGISTER_METHOD(0x020C0800, void, OnUploadProgressChanged, (WebClient * __this, UploadProgressChangedEventArgs * e));
IL2CPP_REGISTER_METHOD(0x020C0820, void, ReportDownloadProgressChanged, (WebClient * __this, Object * arg));
IL2CPP_REGISTER_METHODINFO(0x0477A9D0, WebClient_ReportDownloadProgressChanged__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020C0910, void, ReportUploadProgressChanged, (WebClient * __this, Object * arg));
IL2CPP_REGISTER_METHODINFO(0x0478C838, WebClient_ReportUploadProgressChanged__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020C0A00, void, PostProgressChanged, (WebClient * __this, AsyncOperation * asyncOp, WebClient_ProgressData * progress));
IL2CPP_REGISTER_METHOD(0x01AF1660, void, HandleCompletion, (WebClient * __this, TaskCompletionSource_1_System_Object_ * tcs, Object * e, Func_2_Object_Object_ * getResult, Object * handler, Action_2_System_Net_WebClient_Object_ * unregisterHandler));
IL2CPP_REGISTER_METHOD(0x01AF1660, void, HandleCompletion, (WebClient * __this, TaskCompletionSource_1_System_String_ * tcs, DownloadStringCompletedEventArgs * e, Func_2_System_Net_DownloadStringCompletedEventArgs_String_ * getResult, DownloadStringCompletedEventHandler * handler, Action_2_System_Net_WebClient_System_Net_DownloadStringCompletedEventHandler_ * unregisterHandler));
IL2CPP_REGISTER_METHODINFO(0x0476EB50, WebClient_HandleCompletion_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01AF1660, void, HandleCompletion, (WebClient * __this, TaskCompletionSource_1_System_IO_Stream_ * tcs, OpenReadCompletedEventArgs * e, Func_2_System_Net_OpenReadCompletedEventArgs_System_IO_Stream_ * getResult, OpenReadCompletedEventHandler * handler, Action_2_System_Net_WebClient_System_Net_OpenReadCompletedEventHandler_ * unregisterHandler));
IL2CPP_REGISTER_METHODINFO(0x0477C2E0, WebClient_HandleCompletion_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01AF1660, void, HandleCompletion, (WebClient * __this, TaskCompletionSource_1_System_IO_Stream_ * tcs, OpenWriteCompletedEventArgs * e, Func_2_System_Net_OpenWriteCompletedEventArgs_System_IO_Stream_ * getResult, OpenWriteCompletedEventHandler * handler, Action_2_System_Net_WebClient_System_Net_OpenWriteCompletedEventHandler_ * unregisterHandler));
IL2CPP_REGISTER_METHODINFO(0x04784090, WebClient_HandleCompletion_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01AF1660, void, HandleCompletion, (WebClient * __this, TaskCompletionSource_1_System_String_ * tcs, UploadStringCompletedEventArgs * e, Func_2_System_Net_UploadStringCompletedEventArgs_String_ * getResult, UploadStringCompletedEventHandler * handler, Action_2_System_Net_WebClient_System_Net_UploadStringCompletedEventHandler_ * unregisterHandler));
IL2CPP_REGISTER_METHODINFO(0x04723318, WebClient_HandleCompletion_4__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01AF1660, void, HandleCompletion, (WebClient * __this, TaskCompletionSource_1_System_Byte_ * tcs, DownloadDataCompletedEventArgs * e, Func_2_System_Net_DownloadDataCompletedEventArgs_Byte_ * getResult, DownloadDataCompletedEventHandler * handler, Action_2_System_Net_WebClient_System_Net_DownloadDataCompletedEventHandler_ * unregisterHandler));
IL2CPP_REGISTER_METHODINFO(0x047434E0, WebClient_HandleCompletion_5__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01AF1660, void, HandleCompletion, (WebClient * __this, TaskCompletionSource_1_System_Object_ * tcs, AsyncCompletedEventArgs * e, Func_2_System_ComponentModel_AsyncCompletedEventArgs_Object_ * getResult, AsyncCompletedEventHandler * handler, Action_2_System_Net_WebClient_System_ComponentModel_AsyncCompletedEventHandler_ * unregisterHandler));
IL2CPP_REGISTER_METHODINFO(0x04740630, WebClient_HandleCompletion_6__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01AF1660, void, HandleCompletion, (WebClient * __this, TaskCompletionSource_1_System_Byte_ * tcs, UploadDataCompletedEventArgs * e, Func_2_System_Net_UploadDataCompletedEventArgs_Byte_ * getResult, UploadDataCompletedEventHandler * handler, Action_2_System_Net_WebClient_System_Net_UploadDataCompletedEventHandler_ * unregisterHandler));
IL2CPP_REGISTER_METHODINFO(0x04754A20, WebClient_HandleCompletion_7__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01AF1660, void, HandleCompletion, (WebClient * __this, TaskCompletionSource_1_System_Byte_ * tcs, UploadFileCompletedEventArgs * e, Func_2_System_Net_UploadFileCompletedEventArgs_Byte_ * getResult, UploadFileCompletedEventHandler * handler, Action_2_System_Net_WebClient_System_Net_UploadFileCompletedEventHandler_ * unregisterHandler));
IL2CPP_REGISTER_METHODINFO(0x04751818, WebClient_HandleCompletion_8__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01AF1660, void, HandleCompletion, (WebClient * __this, TaskCompletionSource_1_System_Byte_ * tcs, UploadValuesCompletedEventArgs * e, Func_2_System_Net_UploadValuesCompletedEventArgs_Byte_ * getResult, UploadValuesCompletedEventHandler * handler, Action_2_System_Net_WebClient_System_Net_UploadValuesCompletedEventHandler_ * unregisterHandler));
IL2CPP_REGISTER_METHODINFO(0x04786B30, WebClient_HandleCompletion_9__MethodInfo);
}
