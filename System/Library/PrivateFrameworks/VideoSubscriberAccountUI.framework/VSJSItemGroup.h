/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:41 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/VSJSItemGroup.h>

@protocol VSJSItemGroup <JSExport>
@property (assign,nonatomic) long long selectedItem; 
@required
-(long long)selectedItem;
-(void)setSelectedItem:(long long)arg1;

@end


@protocol VSJSItemGroupBridge;
@interface VSJSItemGroup : IKJSObject <VSJSItemGroup> {

	long long _selectedItem;
	id<VSJSItemGroupBridge> _bridge;

}

@property (nonatomic,retain) id<VSJSItemGroupBridge> bridge;              //@synthesize bridge=_bridge - In the implementation block
@property (assign,nonatomic) long long selectedItem;                      //@synthesize selectedItem=_selectedItem - In the implementation block
-(long long)selectedItem;
-(void)setSelectedItem:(long long)arg1 ;
-(void)setBridge:(id<VSJSItemGroupBridge>)arg1 ;
-(id<VSJSItemGroupBridge>)bridge;
@end

