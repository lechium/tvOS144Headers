/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:13 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Memories/Memories-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PVEffect, NSMutableDictionary, NSString;

@interface ClipBackground : NSObject <NSCopying> {

	PVEffect* _effect;
	int _type;
	NSMutableDictionary* _backgroundEffectSettings;

}

@property (assign,nonatomic) int type;                                                    //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * backgroundEffectSettings;              //@synthesize backgroundEffectSettings=_backgroundEffectSettings - In the implementation block
@property (nonatomic,readonly) NSString * effectID; 
@property (nonatomic,readonly) PVEffect * backgroundEffect; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)setType:(int)arg1 ;
-(int)type;
-(PVEffect *)backgroundEffect;
-(NSString *)effectID;
-(void)setBackgroundEffectSettings:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)backgroundEffectSettings;
@end

