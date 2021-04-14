/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:06 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface AVStringPair : NSObject {

	NSString* _first;
	NSString* _second;

}

@property (nonatomic,readonly) NSString * first;               //@synthesize first=_first - In the implementation block
@property (nonatomic,readonly) NSString * second;              //@synthesize second=_second - In the implementation block
@property (nonatomic,readonly) NSString * key; 
@property (nonatomic,readonly) NSString * value; 
-(NSString *)second;
-(NSString *)value;
-(NSString *)key;
-(NSString *)first;
-(id)initWithString:(id)arg1 separatedByString:(id)arg2 ;
-(BOOL)keyEquals:(id)arg1 ;
@end
