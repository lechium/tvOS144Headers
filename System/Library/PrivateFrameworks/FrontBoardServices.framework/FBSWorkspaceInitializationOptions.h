/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:15 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol FBSWorkspaceDelegate;
@class FBSSerialQueue;

@interface FBSWorkspaceInitializationOptions : NSObject {

	BOOL _startsInactive;
	id<FBSWorkspaceDelegate> _delegate;
	FBSSerialQueue* _callOutQueue;

}

@property (assign,setter=_setStartsInactive:,nonatomic) BOOL _startsInactive;              //@synthesize startsInactive=_startsInactive - In the implementation block
@property (nonatomic,readonly) id<FBSWorkspaceDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) FBSSerialQueue * callOutQueue;                                //@synthesize callOutQueue=_callOutQueue - In the implementation block
+(id)optionsWithDelegate:(id)arg1 ;
-(id)init;
-(id<FBSWorkspaceDelegate>)delegate;
-(void)setCallOutQueue:(FBSSerialQueue *)arg1 ;
-(void)_setStartsInactive:(BOOL)arg1 ;
-(FBSSerialQueue *)callOutQueue;
-(BOOL)_startsInactive;
-(id)_initWithDelegate:(id)arg1 ;
@end

