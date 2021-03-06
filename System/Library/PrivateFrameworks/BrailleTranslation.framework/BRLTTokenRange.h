/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:40 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/BrailleTranslation.framework/BrailleTranslation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <BrailleTranslation/BrailleTranslation-Structs.h>
@interface BRLTTokenRange : NSObject {

	long long _token;
	NSRange _range;

}

@property (assign,nonatomic) NSRange range;                //@synthesize range=_range - In the implementation block
@property (assign,nonatomic) long long token;              //@synthesize token=_token - In the implementation block
-(long long)token;
-(NSRange)range;
-(void)setToken:(long long)arg1 ;
-(void)setRange:(NSRange)arg1 ;
-(id)initWithRange:(NSRange)arg1 token:(long long)arg2 ;
@end

