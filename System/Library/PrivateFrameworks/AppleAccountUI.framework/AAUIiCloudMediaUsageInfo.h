/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:45 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, UIColor;

@interface AAUIiCloudMediaUsageInfo : NSObject {

	float _bytesUsed;
	NSString* _mediaType;
	UIColor* _representativeColor;
	NSString* _displayLabel;

}

@property (nonatomic,retain) NSString * mediaType;                       //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,retain) UIColor * representativeColor;              //@synthesize representativeColor=_representativeColor - In the implementation block
@property (assign,nonatomic) float bytesUsed;                            //@synthesize bytesUsed=_bytesUsed - In the implementation block
@property (nonatomic,retain) NSString * displayLabel;                    //@synthesize displayLabel=_displayLabel - In the implementation block
-(NSString *)mediaType;
-(void)setMediaType:(NSString *)arg1 ;
-(NSString *)displayLabel;
-(float)bytesUsed;
-(void)setBytesUsed:(float)arg1 ;
-(void)setDisplayLabel:(NSString *)arg1 ;
-(id)initWithMediaType:(id)arg1 representativeColor:(id)arg2 bytesUsed:(float)arg3 ;
-(id)capacityBarCatagory;
-(UIColor *)representativeColor;
-(void)setRepresentativeColor:(UIColor *)arg1 ;
@end

