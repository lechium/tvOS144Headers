//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WAProtobufMessageSubmitter.h"

@interface WAGeoServicesMessageSubmitter : WAProtobufMessageSubmitter
{
    long long _groupTypeForThisSubmitter;	// 8 = 0x8
}

@property(nonatomic) long long groupTypeForThisSubmitter; // @synthesize groupTypeForThisSubmitter=_groupTypeForThisSubmitter;
- (id)submitMessage:(id)arg1;	// IMP=0x0000000100025520
- (id)initWithMessageGroupType:(long long)arg1;	// IMP=0x00000001000254d4

@end
