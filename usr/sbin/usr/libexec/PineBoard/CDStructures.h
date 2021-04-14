//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class FBScene, PBSceneLayoutViewController, UIViewController;

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGAffineTransform {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct CGVector {
    double dx;
    double dy;
};

struct CLLocationCoordinate2D {
    double latitude;
    double longitude;
};

struct UIEdgeInsets {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

#pragma mark Typedef'd Structures

typedef struct {
    PBSceneLayoutViewController *sceneLayoutViewController;
    UIViewController *fromViewController;
    UIViewController *toViewController;
    _Bool isResigning;
} CDStruct_821c97ab;

typedef struct {
    PBSceneLayoutViewController *sceneLayoutViewController;
    UIViewController *fromViewController;
    UIViewController *toViewController;
} CDStruct_a697a85d;

typedef struct {
    FBScene *defaultKioskScene;
} CDStruct_090c3085;

typedef struct {
    PBSceneLayoutViewController *sceneLayoutViewController;
    UIViewController *fromViewController;
    UIViewController *toViewController;
    FBScene *defaultKioskScene;
    _Bool shouldPlaySound;
    _Bool isLaunchingFromKiosk;
    struct CGRect appIconFrame;
} CDStruct_ce5a068a;

