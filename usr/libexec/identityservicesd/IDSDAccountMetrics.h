//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IDSDAccountMetrics : NSObject
{
}

+ (id)registrationAccountStatusMetricForNonexistentAccountWithType:(int)arg1 serviceIdentifier:(id)arg2;	// IMP=0x000000010014340c
+ (id)registrationAccountStatusMetricForAccount:(id)arg1;	// IMP=0x0000000100142a1c
+ (_Bool)isProductionEnvironment;	// IMP=0x00000001001429b8
+ (_Bool)areAllSelectedAliasesRegisteredOnAccount:(id)arg1;	// IMP=0x00000001001426e0
+ (_Bool)areAllAliasesSelectedOnAccount:(id)arg1;	// IMP=0x0000000100142414
+ (double)timeSinceLastRegistrationSuccessOnAccount:(id)arg1;	// IMP=0x000000010014236c
+ (double)timeSinceLastRegistrationFailureOnAccount:(id)arg1;	// IMP=0x00000001001422c4
+ (double)timeSinceDateOnAccount:(id)arg1;	// IMP=0x0000000100142210
+ (long long)accountSecurityLevelForAccount:(id)arg1;	// IMP=0x0000000100141fe4
+ (_Bool)isiCloudAccountMatchingAccount:(id)arg1;	// IMP=0x0000000100141c20
+ (_Bool)isiTunesSignedIn;	// IMP=0x0000000100141b80
+ (_Bool)isiCloudSignedIn;	// IMP=0x0000000100141ae0
+ (_Bool)isAccountsFrameworkAvailable;	// IMP=0x0000000100141a0c

@end

