/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:09 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSProgress, PLPhotoLibraryBundle, PLPhotoLibrary, NSObject;

@interface PLCameraProcessingAdjustmentService : NSObject {

	os_unfair_lock_s _lock;
	Aq _cancellationGenerationCounter;
	NSProgress* _currentProgress;
	PLPhotoLibraryBundle* _libraryBundle;
	PLPhotoLibrary* _photoLibrary;
	NSObject*<OS_dispatch_queue> _serializationQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> serializationQueue;              //@synthesize serializationQueue=_serializationQueue - In the implementation block
-(NSObject*<OS_dispatch_queue>)serializationQueue;
-(id)photoLibrary;
-(id)initWithLibraryBundle:(id)arg1 ;
-(id)enqueueCameraProcessingAdjustmentRequestForAssetUUID:(id)arg1 imageConversionClient:(id)arg2 videoConversionClient:(id)arg3 isOnDemand:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
@end

