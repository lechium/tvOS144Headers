/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:33 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextInputCore/TIDescriptorParser.h>

@interface TIEventDescriptorParser : TIDescriptorParser
-(id)init;
-(void)parseEventDescriptors:(id)arg1 andEventSpecs:(id)arg2 fromConfig:(id)arg3 errors:(id)arg4 ;
-(void)parseEventDescriptor:(id*)arg1 andEventSpec:(id*)arg2 withName:(id)arg3 fromConfig:(id)arg4 errors:(id)arg5 ;
-(void)parseFieldDescriptor:(id*)arg1 andFieldSpec:(id*)arg2 withName:(id)arg3 fromConfig:(id)arg4 errors:(id)arg5 ;
-(id)parseStringFieldSpecWithName:(id)arg1 fromConfig:(id)arg2 errors:(id)arg3 ;
-(id)parseIntegerFieldSpecWithName:(id)arg1 fromConfig:(id)arg2 errors:(id)arg3 ;
-(id)parseFloatFieldSpecWithName:(id)arg1 fromConfig:(id)arg2 errors:(id)arg3 ;
-(id)parseBooleanFieldSpecWithName:(id)arg1 fromConfig:(id)arg2 errors:(id)arg3 ;
@end

