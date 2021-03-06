/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:25 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSNumber;

@interface AMSContentRating : NSObject {

	NSString* _contentRatingID;
	NSString* _kind;
	NSString* _label;
	NSString* _name;
	NSString* _ratingDescription;
	NSNumber* _value;

}

@property (nonatomic,readonly) NSString * contentRatingID;                //@synthesize contentRatingID=_contentRatingID - In the implementation block
@property (nonatomic,readonly) NSString * kind;                           //@synthesize kind=_kind - In the implementation block
@property (nonatomic,readonly) NSString * label;                          //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * ratingDescription;              //@synthesize ratingDescription=_ratingDescription - In the implementation block
@property (nonatomic,readonly) NSNumber * value;                          //@synthesize value=_value - In the implementation block
+(id)contentRatingWithDictionary:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(NSNumber *)value;
-(NSString *)kind;
-(NSString *)label;
-(NSString *)ratingDescription;
-(NSString *)contentRatingID;
@end

