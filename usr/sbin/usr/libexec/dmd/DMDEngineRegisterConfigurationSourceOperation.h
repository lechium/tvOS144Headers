//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "DMDEngineDatabaseOperation.h"

@class DMFRegisterConfigurationSourceRequest, NSString;
@protocol DMDEngineRegisterConfigurationSourceOperationDelegate;

@interface DMDEngineRegisterConfigurationSourceOperation : DMDEngineDatabaseOperation
{
    id <DMDEngineRegisterConfigurationSourceOperationDelegate> _delegate;	// 8 = 0x8
    DMFRegisterConfigurationSourceRequest *_request;	// 16 = 0x10
    NSString *_clientIdentifier;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000433d4
@property(copy, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(retain, nonatomic) DMFRegisterConfigurationSourceRequest *request; // @synthesize request=_request;
@property(nonatomic) __weak id <DMDEngineRegisterConfigurationSourceOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void)delegateUpdatedDeclarationSourceAndEndOperation:(id)arg1;	// IMP=0x0000000100043228
- (void)main;	// IMP=0x0000000100042a94

@end
