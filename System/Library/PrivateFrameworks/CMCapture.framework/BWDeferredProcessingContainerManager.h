/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:46 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWDeferredContainerManagerBase.h>

@interface BWDeferredProcessingContainerManager : BWDeferredContainerManagerBase {

	OpaqueFigCaptureDeferredContainerManagerRef _xpcContainerManager;

}
+(id)sharedInstance;
-(id)init;
-(id)createProcessingContainerWithApplicationID:(id)arg1 captureRequestIdentifier:(id)arg2 err:(int*)arg3 ;
-(void)releaseProcessingContainer:(id)arg1 ;
-(id)manifestsForApplicationID:(id)arg1 err:(int*)arg2 ;
-(int)deleteContainerForApplicationID:(id)arg1 captureRequestIdentifier:(id)arg2 ;
-(OpaqueFigCaptureDeferredContainerManagerRef)_copyXPCContainerManager;
-(int)_queryContainerStatus:(id)arg1 captureRequestIdentifier:(id)arg2 status:(int*)arg3 ;
-(id)_copyRemoteContainer:(id)arg1 captureRequestIdentifier:(id)arg2 baseFolderURL:(id)arg3 err:(int*)arg4 ;
-(int)_releaseRemoteContainer:(id)arg1 captureRequestIdentifier:(id)arg2 ;
-(void)_setXPCContainerManager:(OpaqueFigCaptureDeferredContainerManagerRef)arg1 ;
-(int)waitForShaderCompilation;
@end
