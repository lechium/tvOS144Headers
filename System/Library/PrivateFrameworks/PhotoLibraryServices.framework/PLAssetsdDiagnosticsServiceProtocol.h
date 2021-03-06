/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:01 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PLAssetsdDiagnosticsServiceProtocol <NSObject>
@required
-(void)dumpStatusIncludingDaemon:(BOOL)arg1 reply:(/*^block*/id)arg2;
-(void)dumpPhotoAnalysisStatusWithReply:(/*^block*/id)arg1;
-(void)incompleteRestoreProcessesWithReply:(/*^block*/id)arg1;
-(void)getPhotosXPCEndpointWithReply:(/*^block*/id)arg1;
-(void)setPhotosXPCEndpoint:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)initializeSharedMemoryForDeferredLogs:(id)arg1;

@end

