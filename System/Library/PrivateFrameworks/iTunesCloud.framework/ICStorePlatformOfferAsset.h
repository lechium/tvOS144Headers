/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:24 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary, NSURL;

@interface ICStorePlatformOfferAsset : NSObject {

	NSDictionary* _responseDictionary;

}

@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) double previewDuration; 
@property (nonatomic,copy,readonly) NSURL * previewURL; 
@property (nonatomic,readonly) long long size; 
-(long long)size;
-(double)duration;
-(id)initWithResponseDictionary:(id)arg1 ;
-(double)previewDuration;
-(NSURL *)previewURL;
@end

