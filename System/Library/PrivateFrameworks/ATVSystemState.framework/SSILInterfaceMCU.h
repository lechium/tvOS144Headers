/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:49 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ATVSystemState.framework/ATVSystemState
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVSystemState/ATVSystemState-Structs.h>
#import <ATVSystemState/SSILInterface.h>

@interface SSILInterfaceMCU : SSILInterface {

	IOHIDServiceClientRef _service;
	IOHIDEventSystemClientRef _client;

}
-(id)init;
-(void)dealloc;
-(BOOL)setState:(unsigned long long)arg1 error:(id*)arg2 ;
-(IOHIDServiceClientRef)_getService;
-(id)_indicatorLightStateToString:(unsigned long long)arg1 ;
@end

