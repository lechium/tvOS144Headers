/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:47 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface CNUIAccountsFacade : NSObject {

	id _accountStore;

}

@property (nonatomic,readonly) id accountStore;              //@synthesize accountStore=_accountStore - In the implementation block
-(id)init;
-(id)accountStore;
-(id)initWithAccountStore:(id)arg1 requestRunner:(id)arg2 ;
-(void)fetchiCloudFamilyMembersWithCompletionHandler:(/*^block*/id)arg1 ;
@end

