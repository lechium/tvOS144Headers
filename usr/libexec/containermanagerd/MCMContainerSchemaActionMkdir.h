//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MCMContainerSchemaActionBase.h"

#import "MCMContainerSchemaActionHasSinglePath-Protocol.h"

@class NSURL;

@interface MCMContainerSchemaActionMkdir : MCMContainerSchemaActionBase <MCMContainerSchemaActionHasSinglePath>
{
    NSURL *_url;	// 8 = 0x8
}

+ (id)actionIdentifier;	// IMP=0x000000010003b868
- (void).cxx_destruct;	// IMP=0x000000010003b81c
- (_Bool)performWithError:(id *)arg1;	// IMP=0x000000010003b6c0
- (id)description;	// IMP=0x000000010003b618
- (id)initWithPathArgument:(id)arg1 context:(id)arg2;	// IMP=0x000000010003b564

@end

