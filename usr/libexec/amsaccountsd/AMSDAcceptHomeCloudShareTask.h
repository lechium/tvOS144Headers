//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleMediaServices/AMSTask.h>

@class AMSDMultiUserController;
@protocol AMSDHomeCloudShare;

@interface AMSDAcceptHomeCloudShareTask : AMSTask
{
    AMSDMultiUserController *_controller;	// 8 = 0x8
    id <AMSDHomeCloudShare> _share;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100003328
@property(readonly, nonatomic) id <AMSDHomeCloudShare> share; // @synthesize share=_share;
@property(readonly, nonatomic) AMSDMultiUserController *controller; // @synthesize controller=_controller;
- (id)_generateInviteCodeWithError:(id *)arg1;	// IMP=0x0000000100002f60
- (id)performTask;	// IMP=0x0000000100002880
- (id)initWithController:(id)arg1 cloudShare:(id)arg2;	// IMP=0x00000001000027cc

@end

