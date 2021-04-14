/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:58 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <libobjc.A.dylib/VCPMADTaskProtocol.h>

@class NSArray, PHPhotoLibrary, VCPDatabaseReader;

@interface VCPVideoStabilizationAssetProcessingTask : NSObject <VCPMADTaskProtocol> {

	/*^block*/id _completionHandler;
	NSArray* _assets;
	PHPhotoLibrary* _photoLibrary;
	VCPDatabaseReader* _database;
	atomic<bool> _cancel;
	atomic<bool> _started;
	unsigned long long _stabilizationType;
	BOOL _onDemandPixel;
	BOOL _onDemandGyro;

}
+(id)taskWithAssets:(id)arg1 andOptions:(id)arg2 andCompletionHandler:(/*^block*/id)arg3 ;
-(void)dealloc;
-(int)run;
-(void)cancel;
-(int)main;
-(float)resourceRequirement;
-(id)initWithAssets:(id)arg1 andOptions:(id)arg2 andCompletionHandler:(/*^block*/id)arg3 ;
@end

