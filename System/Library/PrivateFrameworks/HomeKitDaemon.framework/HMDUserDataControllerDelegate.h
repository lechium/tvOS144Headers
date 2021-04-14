/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:03 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol HMDUserDataControllerDelegate
@required
-(id)sharedZoneControllerForUserDataController:(id)arg1;
-(id)privateZoneControllerForUserDataController:(id)arg1;
-(BOOL)userDataController:(id)arg1 isPersonalRequestCapableAccessoryID:(id)arg2;
-(BOOL)userDataController:(id)arg1 isMediaContentProfileCapableAccessoryID:(id)arg2;
-(void)userDataControllerDidUpdateAssistantAccessControl:(id)arg1;
-(void)userDataControllerDidUpdateMediaContentProfile:(id)arg1;

@end

