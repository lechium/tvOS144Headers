//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MCMContainerSchemaActionBase.h"

#import "MCMContainerSchemaActionHasSinglePath-Protocol.h"

@class NSURL;

@interface MCMContainerSchemaActionStopBackupExclude : MCMContainerSchemaActionBase <MCMContainerSchemaActionHasSinglePath>
{
    NSURL *_url;	// 8 = 0x8
}

+ (id)actionIdentifier;	// IMP=0x0000000100062f5c
- (void).cxx_destruct;	// IMP=0x0000000100062ec4
- (_Bool)performWithError:(id *)arg1;	// IMP=0x0000000100062dbc
- (id)description;	// IMP=0x0000000100062d14
- (id)initWithPathArgument:(id)arg1 context:(id)arg2;	// IMP=0x0000000100062c60

@end

