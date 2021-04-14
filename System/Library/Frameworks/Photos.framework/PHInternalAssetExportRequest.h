/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:29 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Photos/PHAssetExportRequest.h>

@protocol OS_dispatch_queue;
@class PHResourceLocalAvailabilityRequest, NSProgress, NSObject;

@interface PHInternalAssetExportRequest : PHAssetExportRequest {

	PHResourceLocalAvailabilityRequest* _resourceRetrievalRequest;
	NSProgress* _resourceRetrievalRequestProgressParent;
	NSObject*<OS_dispatch_queue> _resourceRetrievingQueue;

}
+(id)exportRequestForAsset:(id)arg1 error:(id*)arg2 ;
+(id)exportRequestForAsset:(id)arg1 variants:(id)arg2 error:(id*)arg3 ;
+(id)_variantsForAsset:(id)arg1 error:(id*)arg2 ;
-(void)preflightExportWithOptions:(id)arg1 assetAvailability:(long long*)arg2 isProcessingRequired:(BOOL*)arg3 fileURLs:(id*)arg4 info:(id*)arg5 ;
-(void)exportWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_initWithAsset:(id)arg1 variants:(id)arg2 resourceRetrievalRequest:(id)arg3 retrievalRequestProgressParent:(id)arg4 ;
@end

