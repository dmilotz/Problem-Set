//
//  RegiftErrorEnum.swift
//  
//
//  Created by Gabrielle Miller-Messner on 4/14/16.
//
//

import Foundation

// Errors thrown by Regift
@objc public enum RegiftError: Int, ErrorType {
    case DestinationNotFound = 1
    case AddFrameToDestination = 2
    case DestinationFinalize = 3
}
