/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:57 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PFLoggerBackend <NSObject>
@property (nonatomic,readonly) BOOL allowsConcurrentAccess; 
@property (nonatomic,readonly) BOOL formatsMessage; 
@property (nonatomic,readonly) BOOL outputsToDebuggerConsole; 
@required
-(void)flushWithCompletionHandler:(/*^block*/id)arg1;
-(BOOL)allowsConcurrentAccess;
-(void)logFromCodeLocation:(SCD_Struct_PF5*)arg1 facility:(id)arg2 subsystem:(id)arg3 level:(int)arg4 message:(id)arg5 format:(id)arg6 args:(char*)arg7;
-(BOOL)formatsMessage;
-(BOOL)outputsToDebuggerConsole;

@end

