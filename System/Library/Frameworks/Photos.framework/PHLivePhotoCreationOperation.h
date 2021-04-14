/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:31 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Photos/Photos-Structs.h>
#import <Foundation/NSOperation.h>

@class NSArray;

@interface PHLivePhotoCreationOperation : NSOperation {

	long long _contentMode;
	NSArray* _resourceURLs;
	/*^block*/id _resultHandler;
	CGSize _targetSize;

}

@property (nonatomic,readonly) CGSize targetSize;                        //@synthesize targetSize=_targetSize - In the implementation block
@property (nonatomic,readonly) long long contentMode;                    //@synthesize contentMode=_contentMode - In the implementation block
@property (nonatomic,copy,readonly) NSArray * resourceURLs;              //@synthesize resourceURLs=_resourceURLs - In the implementation block
@property (nonatomic,copy,readonly) id resultHandler;                    //@synthesize resultHandler=_resultHandler - In the implementation block
-(void)main;
-(long long)contentMode;
-(CGSize)targetSize;
-(id)initWithResourceURLs:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 resultHandler:(/*^block*/id)arg4 ;
-(id)_createImageOnlyLivePhotoWithImageURL:(id)arg1 ;
-(NSArray *)resourceURLs;
-(id)resultHandler;
@end

