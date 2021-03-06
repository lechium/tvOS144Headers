/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:52 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, UIViewController;

@interface UIStoryboardSegue : NSObject {

	NSString* _identifier;
	UIViewController* _sourceViewController;
	UIViewController* _destinationViewController;
	/*^block*/id _performHandler;
	/*^block*/id _prepareHandler;
	id _sender;

}

@property (nonatomic,copy) id prepareHandler;                                             //@synthesize prepareHandler=_prepareHandler - In the implementation block
@property (nonatomic,copy) id performHandler;                                             //@synthesize performHandler=_performHandler - In the implementation block
@property (nonatomic,retain) id sender;                                                   //@synthesize sender=_sender - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) UIViewController * sourceViewController;                   //@synthesize sourceViewController=_sourceViewController - In the implementation block
@property (nonatomic,readonly) UIViewController * destinationViewController;              //@synthesize destinationViewController=_destinationViewController - In the implementation block
+(id)segueWithIdentifier:(id)arg1 source:(id)arg2 destination:(id)arg3 performHandler:(/*^block*/id)arg4 ;
-(id)init;
-(NSString *)identifier;
-(id)sender;
-(void)setSender:(id)arg1 ;
-(void)perform;
-(UIViewController *)sourceViewController;
-(void)_prepare;
-(UIViewController *)destinationViewController;
-(id)initWithIdentifier:(id)arg1 source:(id)arg2 destination:(id)arg3 ;
-(void)setPerformHandler:(id)arg1 ;
-(id)performHandler;
-(id)prepareHandler;
-(void)setPrepareHandler:(id)arg1 ;
@end

