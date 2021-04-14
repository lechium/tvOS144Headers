/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:34 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SPOwner/SPOwner-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NSURL;

@interface SPUnknownProductMetadata : NSObject <NSCopying, NSSecureCoding> {

	NSString* _title;
	NSArray* _moreDescription;
	double _percentageX;
	double _percentageY;
	NSURL* _image;

}

@property (nonatomic,copy) NSString * title;                       //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSArray * moreDescription;              //@synthesize moreDescription=_moreDescription - In the implementation block
@property (assign,nonatomic) double percentageX;                   //@synthesize percentageX=_percentageX - In the implementation block
@property (assign,nonatomic) double percentageY;                   //@synthesize percentageY=_percentageY - In the implementation block
@property (nonatomic,copy) NSURL * image;                          //@synthesize image=_image - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSURL *)image;
-(void)setImage:(NSURL *)arg1 ;
-(NSArray *)moreDescription;
-(double)percentageX;
-(double)percentageY;
-(id)initWithTitle:(id)arg1 description:(id)arg2 percentageX:(double)arg3 percentageY:(double)arg4 image:(id)arg5 ;
-(void)setMoreDescription:(NSArray *)arg1 ;
-(void)setPercentageX:(double)arg1 ;
-(void)setPercentageY:(double)arg1 ;
@end
