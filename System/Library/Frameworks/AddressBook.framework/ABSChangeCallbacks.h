/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:12 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class ABSAddressBook, NSMutableArray;

@interface ABSChangeCallbacks : NSObject {

	ABSAddressBook* _addressBook;
	NSMutableArray* _externalCallbacks;
	NSMutableArray* _externalCallBackThreads;
	NSMutableArray* _externalCallbackContexts;
	long long _initialAccessStatus;

}
-(void)dealloc;
-(id)initWithAddressBook:(id)arg1 ;
-(void)contactStoreChanged:(id)arg1 ;
-(BOOL)hasExternalCallback:(/*function pointer*/void*)arg1 onThread:(id)arg2 withContext:(void*)arg3 ;
-(void)addExternalCallback:(/*function pointer*/void*)arg1 onThread:(id)arg2 withContext:(void*)arg3 ;
-(void)removeExternalCallback:(/*function pointer*/void*)arg1 withContext:(void*)arg2 ;
@end

