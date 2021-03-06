/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:02 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ActionKit/FATObject.h>

@class EDAMUserIdentity, EDAMUserException, EDAMNotFoundException;

@interface EDAMManageNotebookSharesError : FATObject {

	EDAMUserIdentity* _userIdentity;
	EDAMUserException* _userException;
	EDAMNotFoundException* _notFoundException;

}

@property (nonatomic,retain) EDAMUserIdentity * userIdentity;                        //@synthesize userIdentity=_userIdentity - In the implementation block
@property (nonatomic,retain) EDAMUserException * userException;                      //@synthesize userException=_userException - In the implementation block
@property (nonatomic,retain) EDAMNotFoundException * notFoundException;              //@synthesize notFoundException=_notFoundException - In the implementation block
+(id)structName;
+(id)structFields;
-(EDAMUserIdentity *)userIdentity;
-(void)setUserIdentity:(EDAMUserIdentity *)arg1 ;
-(EDAMUserException *)userException;
-(void)setUserException:(EDAMUserException *)arg1 ;
-(EDAMNotFoundException *)notFoundException;
-(void)setNotFoundException:(EDAMNotFoundException *)arg1 ;
@end

