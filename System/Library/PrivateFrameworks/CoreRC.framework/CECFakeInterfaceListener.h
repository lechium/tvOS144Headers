/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:09 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreRC/CoreRC-Structs.h>
#import <CoreRC/CoreRCInterfaceListener.h>

@interface CECFakeInterfaceListener : CoreRCInterfaceListener
-(BOOL)interface:(id)arg1 sendFrame:(CECFrame)arg2 withRetryCount:(unsigned char)arg3 error:(id*)arg4 ;
-(BOOL)interface:(id)arg1 pingTo:(unsigned char)arg2 acknowledged:(BOOL*)arg3 error:(id*)arg4 ;
-(id)fakeAddInterfaceWithProperties:(id)arg1 ;
-(BOOL)interface:(id)arg1 setAddressMask:(unsigned short)arg2 error:(id*)arg3 ;
-(BOOL)interface:(id)arg1 setPromiscMode:(BOOL)arg2 error:(id*)arg3 ;
@end

