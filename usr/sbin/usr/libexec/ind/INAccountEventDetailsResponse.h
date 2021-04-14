//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleAccount/AAResponse.h>

@class NSData, NSDictionary, NSString, NSURL;

@interface INAccountEventDetailsResponse : AAResponse
{
    NSDictionary *_responseParameters;	// 32 = 0x20
    NSDictionary *_alertParameters;	// 40 = 0x28
    NSData *_responseData;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000100006b3c
- (id)_parseURLFromAlertParameterWithName:(id)arg1;	// IMP=0x0000000100006a78
@property(readonly, nonatomic) NSURL *alternateButtonURL;
@property(readonly, nonatomic) NSURL *defaultButtonURL;
@property(readonly, nonatomic) NSString *alternateButtonTitle;
@property(readonly, nonatomic) NSString *defaultButtonTitle;
@property(readonly, nonatomic) NSString *message;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) _Bool showAlert;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;	// IMP=0x00000001000066e0

@end

