/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:00 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/AXDragEndpointRequestSatisfierDelegate.h>

@protocol AXDragEndpointVendorDelegate;
@class NSXPCListener, NSMutableSet, NSString;

@interface AXDragEndpointVendor : NSObject <NSXPCListenerDelegate, AXDragEndpointRequestSatisfierDelegate> {

	NSXPCListener* _listener;
	NSMutableSet* _activeConnections;
	id<AXDragEndpointVendorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<AXDragEndpointVendorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<AXDragEndpointVendorDelegate>)delegate;
-(void)setDelegate:(id<AXDragEndpointVendorDelegate>)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)resume;
-(id)initWithXPCListener:(id)arg1 ;
-(void)endpointRequestSatisfierDidDisconnect:(id)arg1 ;
-(id)endpointForConnection:(id)arg1 forEndpointRequestSatisfier:(id)arg2 ;
@end

