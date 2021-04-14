/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:38 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/LocationSupport.framework/LocationSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary;

@interface CLSettingsDictionary : NSObject {

	id _internal;

}

@property (nonatomic,retain) NSDictionary * dictionary;              //@synthesize internal=_internal - In the implementation block
+(id)settingsWithDictionary:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setDictionary:(NSDictionary *)arg1 ;
-(NSDictionary *)dictionary;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)boolForKey:(id)arg1 defaultValue:(BOOL)arg2 ;
-(BOOL)hasValueForKey:(id)arg1 ;
-(double)doubleForKey:(id)arg1 defaultValue:(double)arg2 ;
-(int)intForKey:(id)arg1 defaultValue:(int)arg2 ;
-(float)floatForKey:(id)arg1 defaultValue:(float)arg2 ;
-(id)stringForKey:(id)arg1 defaultValue:(id)arg2 ;
-(id)dictionaryForKey:(id)arg1 defaultValue:(id)arg2 ;
-(short)shortForKey:(id)arg1 defaultValue:(short)arg2 ;
-(long long)longForKey:(id)arg1 defaultValue:(long long)arg2 ;
-(id)arrayForKey:(id)arg1 defaultValue:(id)arg2 ;
@end

