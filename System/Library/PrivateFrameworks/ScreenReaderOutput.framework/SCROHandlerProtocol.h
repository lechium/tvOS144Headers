/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:27 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SCROHandlerProtocol
@required
-(int)handleRegisterCallbackForKey:(int)arg1 trusted:(BOOL)arg2;
-(int)handleSetValue:(id)arg1 forKey:(int)arg2 trusted:(BOOL)arg3;
-(int)handleGetValue:(id*)arg1 forKey:(int)arg2 withObject:(id)arg3 trusted:(BOOL)arg4;
-(int)handlePerformActionForKey:(int)arg1 trusted:(BOOL)arg2;
-(int)handleGetValue:(id*)arg1 forKey:(int)arg2 trusted:(BOOL)arg3;

@end
