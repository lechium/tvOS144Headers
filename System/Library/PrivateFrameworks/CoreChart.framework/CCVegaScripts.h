/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:08 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreChart.framework/CoreChart
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface CCVegaScripts : NSObject
+(void)evaluateBootstrapScriptsInContext:(id)arg1 ;
+(void)evaluateVegaLiteScriptInContext:(id)arg1 ;
+(id)stringForScriptData:(char*)arg1 length:(unsigned long long)arg2 ;
+(id)loadScriptWithName:(id)arg1 source:(id)arg2 inVirtualMachine:(id)arg3 ;
+(void)evaluateScriptWithName:(id)arg1 source:(id)arg2 inContext:(id)arg3 ;
+(id)vegaJS;
+(id)vegaliteJS;
@end
