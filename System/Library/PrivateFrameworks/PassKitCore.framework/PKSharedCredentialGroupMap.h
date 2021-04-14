/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:32 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary, NSMutableArray, PKAppletSubcredential;

@interface PKSharedCredentialGroupMap : NSObject {

	NSMutableDictionary* _groupIdentifierToGroupNumber;
	NSMutableDictionary* _sharingSessionToGroupNumber;
	NSMutableDictionary* _recipientIdentifierToGroupNumber;
	NSMutableDictionary* _groupNumberToSharedCredentials;
	NSMutableDictionary* _groupNumberToInvitationReceipts;
	NSMutableArray* _notGroupedSharedCredentials;
	NSMutableArray* _notGroupedInvitationReceipts;
	long long _groupCount;
	PKAppletSubcredential* _credential;

}
-(id)groups;
-(id)initWithCredential:(id)arg1 ;
-(void)insertSharedCredential:(id)arg1 ;
-(void)insertInvitationReceipt:(id)arg1 ;
-(id)groupNumberWithGroupIdentifier:(id)arg1 sharingSessionIdentifier:(id)arg2 recipientIdentifier:(id)arg3 ;
-(void)insertSharedCredential:(id)arg1 intoGroup:(id)arg2 ;
-(void)assignGroupNumber:(id)arg1 toGroupIdentifier:(id)arg2 sharingSessionIdentifier:(id)arg3 recipientIdentifier:(id)arg4 ;
-(void)insertInvitationReceipt:(id)arg1 intoGroup:(id)arg2 ;
@end

