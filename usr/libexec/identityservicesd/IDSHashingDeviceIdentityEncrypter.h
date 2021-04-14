//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDSMPFullDeviceIdentityContainerEncrypter-Protocol.h"

@class IDSMPFullDeviceIdentityContainerEncrypter, IDSMessageHashChecker, NSString;

@interface IDSHashingDeviceIdentityEncrypter : NSObject <IDSMPFullDeviceIdentityContainerEncrypter>
{
    IDSMPFullDeviceIdentityContainerEncrypter *_fullDeviceIdentityContainerEncrypter;	// 8 = 0x8
    IDSMessageHashChecker *_messageHashChecker;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010010ce5c
@property(readonly, nonatomic) IDSMessageHashChecker *messageHashChecker; // @synthesize messageHashChecker=_messageHashChecker;
@property(readonly, nonatomic) IDSMPFullDeviceIdentityContainerEncrypter *fullDeviceIdentityContainerEncrypter; // @synthesize fullDeviceIdentityContainerEncrypter=_fullDeviceIdentityContainerEncrypter;
- (id)decryptData:(id)arg1 withPublicDeviceIdentityContainer:(id)arg2 usingIdentifier:(id)arg3 isRetry:(_Bool)arg4;	// IMP=0x000000010010c9b8
- (id)decryptData:(id)arg1 withPublicDeviceIdentityContainer:(id)arg2 error:(id *)arg3 usingIdentifier:(id)arg4 isRetry:(_Bool)arg5;	// IMP=0x000000010010c83c
- (id)_checkMessageHashForData:(id)arg1 identifier:(id)arg2 isRetry:(_Bool)arg3 delayedCommitBlock:(CDUnknownBlockType *)arg4;	// IMP=0x000000010010c6e4
- (id)encryptData:(id)arg1 withPublicDeviceIdentityContainer:(id)arg2 usingIdentifier:(id)arg3 error:(id *)arg4;	// IMP=0x000000010010c5f0
- (id)encryptData:(id)arg1 withPublicDeviceIdentityContainer:(id)arg2 usedIdentifier:(id *)arg3 error:(id *)arg4;	// IMP=0x000000010010c51c
- (id)initWithDeviceIdentityContainerEncrypter:(id)arg1 messageHashChecker:(id)arg2;	// IMP=0x000000010010c400

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

