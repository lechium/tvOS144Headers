/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:08 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface AKURLRequestApprover : NSObject {

	NSArray* _whiteListedPaths;

}
-(BOOL)_matchInputAgainstPaths:(id)arg1 ;
-(id)initWithWhitelistedPaths:(id)arg1 ;
-(BOOL)shouldAllowRequest:(id)arg1 ;
@end

