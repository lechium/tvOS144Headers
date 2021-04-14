/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:19:53 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CFNetwork/CFNetwork-Structs.h>
@interface NSNetServiceBrowser : NSObject {

	id _netServiceBrowser;
	id _delegate;
	void* _reserved;
	BOOL _includesPeerToPeer;

}

@property (assign) id<NSNetServiceBrowserDelegate> delegate; 
@property (assign) BOOL includesPeerToPeer;                               //@synthesize includesPeerToPeer=_includesPeerToPeer - In the implementation block
-(id)init;
-(void)dealloc;
-(id<NSNetServiceBrowserDelegate>)delegate;
-(void)setDelegate:(id<NSNetServiceBrowserDelegate>)arg1 ;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)stop;
-(BOOL)includesPeerToPeer;
-(void)setIncludesPeerToPeer:(BOOL)arg1 ;
-(void)_setIncludesAWDL:(BOOL)arg1 ;
-(void)searchForBrowsableDomains;
-(void)searchForRegistrationDomains;
-(void)searchForServicesOfType:(id)arg1 inDomain:(id)arg2 ;
-(CFNetServiceBrowserRef)_internalNetServiceBrowser;
-(void)_dispatchCallBack:(void*)arg1 flags:(unsigned long long)arg2 error:(SCD_Struct_NS25)arg3 ;
-(void)searchForAllDomains;
@end

