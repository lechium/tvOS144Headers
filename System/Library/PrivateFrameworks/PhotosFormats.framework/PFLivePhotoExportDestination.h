/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:49 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSURL;

@interface PFLivePhotoExportDestination : NSObject {

	NSURL* _photoURL;
	NSURL* _videoURL;

}

@property (readonly) NSURL * photoURL;              //@synthesize photoURL=_photoURL - In the implementation block
@property (readonly) NSURL * videoURL;              //@synthesize videoURL=_videoURL - In the implementation block
+(id)destinationWithPhotoURL:(id)arg1 videoURL:(id)arg2 ;
-(NSURL *)photoURL;
-(NSURL *)videoURL;
-(id)initWithPhotoURL:(id)arg1 videoURL:(id)arg2 ;
@end

