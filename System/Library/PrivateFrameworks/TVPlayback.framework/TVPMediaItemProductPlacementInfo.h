/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:31 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSNumber;

@interface TVPMediaItemProductPlacementInfo : NSObject {

	NSString* _localizedInfoString;
	NSNumber* _duration;
	NSString* _imageUrlStringFormat;

}

@property (nonatomic,retain) NSString * localizedInfoString;               //@synthesize localizedInfoString=_localizedInfoString - In the implementation block
@property (nonatomic,retain) NSNumber * duration;                          //@synthesize duration=_duration - In the implementation block
@property (nonatomic,retain) NSString * imageUrlStringFormat;              //@synthesize imageUrlStringFormat=_imageUrlStringFormat - In the implementation block
-(id)description;
-(NSNumber *)duration;
-(void)setDuration:(NSNumber *)arg1 ;
-(NSString *)localizedInfoString;
-(NSString *)imageUrlStringFormat;
-(id)initWithLocalizedProductPlacementInfoString:(id)arg1 duration:(id)arg2 andImageURLStringFormat:(id)arg3 ;
-(void)setLocalizedInfoString:(NSString *)arg1 ;
-(void)setImageUrlStringFormat:(NSString *)arg1 ;
@end

