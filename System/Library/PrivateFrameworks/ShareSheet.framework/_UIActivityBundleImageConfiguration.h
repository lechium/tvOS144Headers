/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:51 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class UIImage, NSString;

@interface _UIActivityBundleImageConfiguration : NSObject <NSSecureCoding> {

	UIImage* _fetchedImage;
	NSString* _imageName;
	NSString* _bundlePath;
	long long _activityCategory;

}

@property (nonatomic,copy) NSString * imageName;                      //@synthesize imageName=_imageName - In the implementation block
@property (nonatomic,copy) NSString * bundlePath;                     //@synthesize bundlePath=_bundlePath - In the implementation block
@property (assign,nonatomic) long long activityCategory;              //@synthesize activityCategory=_activityCategory - In the implementation block
@property (nonatomic,readonly) UIImage * fetchedImage; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundlePath;
-(void)setBundlePath:(NSString *)arg1 ;
-(NSString *)imageName;
-(void)setImageName:(NSString *)arg1 ;
-(id)initWithImageName:(id)arg1 bundlePath:(id)arg2 activityCategory:(long long)arg3 ;
-(long long)activityCategory;
-(void)setActivityCategory:(long long)arg1 ;
-(UIImage *)fetchedImage;
@end

