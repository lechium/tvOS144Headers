/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:06 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface IMDefaults : NSObject
+(id)sharedInstance;
-(BOOL)getBoolFromDomain:(id)arg1 forKey:(id)arg2 ;
-(BOOL)getBoolFromDomain:(id)arg1 forKey:(id)arg2 defaultValue:(BOOL)arg3 ;
-(void)setBool:(BOOL)arg1 forDomain:(id)arg2 forKey:(id)arg3 ;
-(id)getValueFromDomain:(id)arg1 forKey:(id)arg2 ;
-(void)setValue:(id)arg1 forDomain:(id)arg2 forKey:(id)arg3 ;
@end

