/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:35 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ITMLKit/ITMLKit-Structs.h>
@class IKArray;

@interface IKCSSParseObject : NSObject {

	IKArray* _cssValue;
	long long _type;
	NSRange _range;

}

@property (nonatomic,retain) IKArray * cssValue;              //@synthesize cssValue=_cssValue - In the implementation block
@property (assign,nonatomic) long long type;                  //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) NSRange range;                   //@synthesize range=_range - In the implementation block
+(id)stringifyList:(id)arg1 ;
-(id)description;
-(id)init;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(NSRange)range;
-(void)setRange:(NSRange)arg1 ;
-(IKArray *)cssValue;
-(void)setCssValue:(IKArray *)arg1 ;
@end

