//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "Task.h"

@class BetaAppFeedbackMemoryEntity;

@interface TestFlightUploadSubTask : Task
{
    BetaAppFeedbackMemoryEntity *_entity;	// 8 = 0x8
}

+ (id)taskWithEntity:(id)arg1;	// IMP=0x00000001000fafac
- (void).cxx_destruct;	// IMP=0x00000001000fba58
@property(retain, nonatomic) BetaAppFeedbackMemoryEntity *entity; // @synthesize entity=_entity;
- (_Bool)_useOverride:(id)arg1;	// IMP=0x00000001000fb978
- (id)addAttemptCountToURL:(id)arg1;	// IMP=0x00000001000fb6d8
- (id)performRequestWith:(long long)arg1 URL:(id)arg2 parameters:(id)arg3 error:(id *)arg4;	// IMP=0x00000001000fb014
- (id)contentTypeHeaderValue;	// IMP=0x00000001000fb008
- (id)acceptHeaderValue;	// IMP=0x00000001000faffc

@end

