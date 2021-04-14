/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:58 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Assistant/Plugins/Media.assistantBundle/Media
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SAMPAddMediaItemsToLibrary.h>
#import <libobjc.A.dylib/AFServiceCommand.h>

@class NSString, ICUserIdentity, MPCloudController;

@interface MPAssistantAddMediaItemsToLibrary : SAMPAddMediaItemsToLibrary <AFServiceCommand> {

	NSString* _requestAceHash;
	ICUserIdentity* _userIdentity;
	MPCloudController* _cloudController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)performWithCompletion:(/*^block*/id)arg1 ;
-(void)_performWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_addMediaItemsToLibrarySupported;
-(void)_performAddMediaItemsWithCompletion:(/*^block*/id)arg1 ;
-(void)_requestCompanionToAddMediaItemsForOrigin:(void*)arg1 withCompletion:(/*^block*/id)arg2 ;
-(long long)_extractAtomID;
@end
