//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MCDeviceUploadCredentials, MCDeviceUploadOrganization, MCDeviceUploadSubmitDeviceRequestPayload, NSString;

@protocol CCDServiceInterface <NSObject>
- (void)submitDeviceUploadRequest:(MCDeviceUploadSubmitDeviceRequestPayload *)arg1 credentials:(MCDeviceUploadCredentials *)arg2 completionBlock:(void (^)(_Bool, NSDictionary *, NSError *))arg3;
- (void)retrieveDeviceUploadSoldToIdsForOrganization:(MCDeviceUploadOrganization *)arg1 credentials:(MCDeviceUploadCredentials *)arg2 completionBlock:(void (^)(_Bool, NSDictionary *, NSError *))arg3;
- (void)retrieveDeviceUploadRequestTypesWithCredentials:(MCDeviceUploadCredentials *)arg1 completionBlock:(void (^)(_Bool, NSDictionary *, NSError *))arg2;
- (void)retrieveDeviceUploadOrganizationsWithCredentials:(MCDeviceUploadCredentials *)arg1 completionBlock:(void (^)(_Bool, NSDictionary *, NSError *))arg2;
- (void)unenrollWithCompletionBlock:(void (^)(_Bool, NSDictionary *, NSError *))arg1;
- (void)fetchConfigurationWithoutValidationWithCompletionBlock:(void (^)(_Bool, NSDictionary *, NSError *))arg1;
- (void)fetchConfigurationWithCompletionBlock:(void (^)(_Bool, NSDictionary *, NSError *))arg1;
- (void)provisionallyEnrollWithNonce:(NSString *)arg1 completionBlock:(void (^)(_Bool, NSDictionary *, NSError *))arg2;
@end

