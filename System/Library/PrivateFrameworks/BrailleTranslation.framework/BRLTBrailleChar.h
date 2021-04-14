/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:40 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/BrailleTranslation.framework/BrailleTranslation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BrailleTranslation/BrailleTranslation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface BRLTBrailleChar : NSObject <NSCopying> {

	unsigned char _bits;

}

@property (assign) BOOL dot1; 
@property (assign) BOOL dot2; 
@property (assign) BOOL dot3; 
@property (assign) BOOL dot4; 
@property (assign) BOOL dot5; 
@property (assign) BOOL dot6; 
@property (assign) BOOL dot7; 
@property (assign) BOOL dot8; 
@property (readonly) NSString * unicode; 
@property (readonly) unsigned char bits; 
+(id)charWithUnichar:(unsigned short)arg1 ;
+(id)charWithBits:(unsigned char)arg1 ;
+(id)charWithUnicode:(id)arg1 ;
+(id)charWithBrf:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(unsigned char)bits;
-(NSString *)unicode;
-(id)initWithBits:(unsigned char)arg1 ;
-(id)initWithUnicode:(id)arg1 ;
-(id)initWithBrf:(id)arg1 ;
-(id)initWithUnichar:(unsigned short)arg1 ;
-(void)_setDot:(int)arg1 up:(BOOL)arg2 ;
-(BOOL)_dotUp:(int)arg1 ;
-(BOOL)isEqualToBrailleChar:(id)arg1 ;
-(void)setDot1:(BOOL)arg1 ;
-(BOOL)dot1;
-(void)setDot2:(BOOL)arg1 ;
-(BOOL)dot2;
-(void)setDot3:(BOOL)arg1 ;
-(BOOL)dot3;
-(void)setDot4:(BOOL)arg1 ;
-(BOOL)dot4;
-(void)setDot5:(BOOL)arg1 ;
-(BOOL)dot5;
-(void)setDot6:(BOOL)arg1 ;
-(BOOL)dot6;
-(void)setDot7:(BOOL)arg1 ;
-(BOOL)dot7;
-(void)setDot8:(BOOL)arg1 ;
-(BOOL)dot8;
@end

