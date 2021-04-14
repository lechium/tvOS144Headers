//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SDBlockContainer.h"

@class NSObject;
@protocol OS_xpc_object;

__attribute__((visibility("hidden")))
@interface SDLogAgentContainer : SDBlockContainer
{
    NSObject<OS_xpc_object> *_logAgentConnection;	// 32 = 0x20
    unsigned long long _taskType;	// 40 = 0x28
}

+ (id)containerAtLocation:(id)arg1 forTaskType:(unsigned long long)arg2 withTimeout:(double)arg3 withConnection:(id)arg4 withDelegate:(id)arg5;	// IMP=0x000000010003dec4
- (void).cxx_destruct;	// IMP=0x000000010003e9a4
@property unsigned long long taskType; // @synthesize taskType=_taskType;
@property(retain, nonatomic) NSObject<OS_xpc_object> *logAgentConnection; // @synthesize logAgentConnection=_logAgentConnection;

@end

