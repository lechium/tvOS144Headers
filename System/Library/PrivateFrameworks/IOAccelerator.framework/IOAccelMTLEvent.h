/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:06 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/IOAccelerator.framework/IOAccelerator
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <IOAccelerator/IOAccelerator-Structs.h>
@interface IOAccelMTLEvent : NSObject {

	_IOAccelShared* _sharedRef;
	unsigned _eventName;
	unsigned long long _globalTraceObjectID;

}
-(void)dealloc;
-(id)initWithShared:(_IOAccelShared*)arg1 ;
-(unsigned)encodeKernelSignalEventCommandArgs:(IOAccelKernelCommandSignalOrWaitEventArgs*)arg1 value:(unsigned long long)arg2 ;
-(unsigned)encodeKernelWaitEventCommandArgs:(IOAccelKernelCommandSignalOrWaitEventArgs*)arg1 value:(unsigned long long)arg2 ;
-(unsigned)encodeKernelWaitEventCommandArgs:(IOAccelKernelCommandSignalOrWaitEventArgs*)arg1 value:(unsigned long long)arg2 timeout:(unsigned)arg3 ;
@end
